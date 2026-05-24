pipeline {
    agent any

    environment {
        DOCKER_IMAGE = "charitha29/cpp-kubernetes-project"
        DOCKER_TAG = "latest"
        KUBECONFIG = "${WORKSPACE}/kubeconfig"
    }

    stages {

        stage('Clone Repository') {
            steps {
                git branch: 'main',
                    credentialsId: 'github-creds',
                    url: 'https://github.com/charitha2901/cpp_kubernetes_project.git'
            }
        }

        stage('Build C++ Application') {
            steps {
                bat '''
                if exist build rmdir /s /q build
                mkdir build
                cd build
                cmake ..
                cmake --build . --config Release
                '''
            }
        }

        stage('Run Unit Tests') {
            steps {
                bat '''
                cd build
                ctest
                '''
            }
        }

        stage('Build Docker Image') {
            steps {
                bat """
                docker build -t %DOCKER_IMAGE%:%DOCKER_TAG% .
                """
            }
        }

        stage('Docker Login') {
            steps {
                withCredentials([usernamePassword(
                    credentialsId: 'dockerhub-creds',
                    usernameVariable: 'DOCKER_USER',
                    passwordVariable: 'DOCKER_PASS'
                )]) {

                    bat '''
                    docker logout
                    docker login -u %DOCKER_USER% -p %DOCKER_PASS%
                    '''
                }
            }
        }

        stage('Push Docker Image') {
            steps {
                bat """
                docker push %DOCKER_IMAGE%:%DOCKER_TAG%
                """
            }
        }

        stage('Deploy to Kubernetes') {
            steps {
                bat '''
                kubectl apply -f k8s/deployment.yaml
                kubectl apply -f k8s/service.yaml
                '''
            }
        }
    }

    post {
        success {
            echo 'Pipeline executed successfully!'
        }

        failure {
            echo 'Pipeline failed!'
        }
    }
}
