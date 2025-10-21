// MATHEMATICAL EXPECTATION
// related to probability

// it is a weighted average of discrete random variable
// E(x) = x1 * p1 + x2 * p2 + ... + xn * pn
// where xi is the value of the random variable and pi is the probability of that value

// linearity of expectation

// if X and Y are two random variables, then
// E(X + Y) = E(X) + E(Y)

// what is expected number of throws of a coin to get a head

// solution: 
// x = (1 throw to get success)(probablity of success) + (1(wasted throws) + x throw to get failure)(probability of failure)
// x = 1*(1/2) + (1+x)*(1/2)
// x = (1/2) + (1/2)(1+x)
// x = 1 + (1/2)x
// (1/2)x = 1
// x = 2


// what is expected number of throws to get 2 consecutive heads

// solution: 
// x = (2 throw to get success)(probablity of success) +        // HH
//     (2 + x throw to get failure)(probability of failure) +   // HT...
//     (1 + x throw to get failure)(probability of failure) +   // T...
/// x = (2)(0.25) + (2+x)(0.25) + (1+x)(0.5)
// x = 6

// what is expected number of throws to get n consecutive heads

// solution: 
// x = (n throws to get success)(probablity of success) +               // HHH(n :times)
//     (n + x throw to get failure)(probability of failure) +           // H(n-1 :times)T...
//     (n + x - 1 throw to get failure)(probability of failure) +       // H(n-2 :times)T...  this in continued till
//     (n + 1 throw to get failure)(probability of failure)             // T...

// x = (n)((0.5)^(n)) + (n+x)((0.5)^(n)) + (n+x-1)((0.5)^(n - 1)) + ...... + (n+1)((0.5)^(1))
// x = 2^(n+1) - 2



// Bernoulli's Trial
// An experiment is known as bernoulli's trial if it satisfies the following conditions:
// 1. There are only two possible outcomes: success or failure.
// 2. The probability of success is the same for each trial.
// 3. The trials are independent.

// theorem 1
// if the probablity of success of a trial is p then expect number of trials to get a success is 1/p
// if the probablity of getting a success in trial is p then expect number of successes in n trials np


// choose number 
// n students are asked to choose a number from 1 to 100 inclusve. 
// what is the expected number of students that would choose a single digit number
// answer: 9n/100


// Interview candidates
// n candidates are interviewed for a job. Each candidate has a probability p of being selected.
// what is the expected number of interviews you need to take so someone would be selected?
// answer: 1/p


// coupon collector problem 
// A certain brand distibutes a coupon a packet of chips.
// the coupon is chosen from a set of 'N' distine coupons. what is the expected number of packets one must buy to get all n coupons

// answer: 
// E(Xi) = denotes the expected number of packets to buy to get the i-th coupon
// E(X) = E(X1) + E(X2) + ... + E(XN)
// P(Xi) = available new coupons / probability of getting a new coupon = (n-i-1)/(n)
// E(Xi) = 1 / P(Xi) = n / (n-i-1)
// E(x) = n(1 + 1/2 + 1/3 + ... + 1/n)

