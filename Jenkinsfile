pipeline {

    agent any

    environment {
        IMAGE_NAME = "username/cpp-cicd-app"
    }

    stages {

        stage('Clone Repository') {
            steps {
                git 'https://github.com/username/cpp-k8s-cicd.git'
            }
        }

        stage('Build Application') {
            steps {
                bat '''
                mkdir build
                cd build
                cmake ..
                cmake --build .
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
                bat 'docker build -t %IMAGE_NAME%:v1 .'
            }
        }

        stage('Push Docker Image') {
            steps {

                withCredentials([usernamePassword(
                    credentialsId: 'dockerhub',
                    usernameVariable: 'DOCKER_USER',
                    passwordVariable: 'DOCKER_PASS'
                )]) {

                    bat 'docker login -u %DOCKER_USER% -p %DOCKER_PASS%'
                    bat 'docker push %IMAGE_NAME%:v1'
                }
            }
        }

        stage('Deploy to Kubernetes') {
            steps {
                bat 'kubectl apply -f deployment.yaml'
                bat 'kubectl apply -f service.yaml'
            }
        }
    }
}