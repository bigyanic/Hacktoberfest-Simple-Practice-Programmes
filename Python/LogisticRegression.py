''' Logistic Regression is a Machine Learning algorithm which is used for the classification problems,
  it is a predictive analysis algorithm and based on the concept of probability. '''
  
class LogisticRegression:
    def __init__(self, learning_rate=0.01, epochs=1000, verbose=False, plot_loss=False):
      self.learning_rate = learning_rate
      self.epochs = epochs
      self.verbose = verbose
      self.plot_loss = plot_loss
      self.w = None
      self.b = None
    
      self.cost_per_iteration = []

    def sigmoid(self, z):
      return 1/(1+np.exp(-z))

    def loss(self, a, Y, m):
      return (-1/m)*np.sum(Y*np.log(a) + (1-Y)*np.log(1-a))
   
    def fit(self, X, Y):
      m, n = X.shape

      # Forward propagatoin
      self.w = np.zeros(n)
      self.b = 0

      for i in range(self.epochs):
        z = np.dot(X, self.w) + self.b
        a = self.sigmoid(z)
        cost = self.loss(a, Y, m)

        if i%1000 == 0 and self.verbose==True:
          self.cost_per_iteration.append(cost)
          print("Number of Epochs: ",i," Cost: ",cost)
        
        # Backpropagation
        dw = (np.dot(X.T, (a - Y)))/m # gradient of weight
        db = (np.sum(a - Y)).mean()/m # gradient of bias
        
        # Updating weights
        self.w = self.w - self.learning_rate*dw
        self.b = self.b - self.learning_rate*db

    def predict(self, X):
        Z = np.dot(X, self.w) + self.b
        y_hat = self.sigmoid(Z)
        y_predicted_cls = [1 if i >= 0.5 else 0 for i in y_hat]
        return y_predicted_cls

    
    def score(self, X, Y):
      z = np.dot(X, self.w) + self.b
      y_hat = self.sigmoid(z)
      if self.plot_loss:
        plt.plot(self.cost_per_iteration)
        plt.show()
      return (y_hat.round()==Y).mean()



