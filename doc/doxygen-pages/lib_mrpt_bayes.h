/** \page mrpt-bayes Library overview: mrpt-bayes
 *

<small> <a href="index.html#libs">Back to list of libraries</a> </small>
<br>

<h2>mrpt-base</h2>
<hr>

Here there are two main family of algorithms:
<ul>
<li><b>Kalman filters:</b> A generic, templatized Kalman filter implementation (includes EKF,IEKF and in the future, UKF), which 
only requires from the programmer to provide the system models and (optinally) the Jacobians. See mrpt::bayes::CKalmanFilterCapable </li>
<li><b>Particle filters:</b> A set of helper classes and functions to perform particle filtering. In this case the 
algorithms are not as generic as in Kalman filtering, but the classes serve to organize and unify the interface of different 
PF algorithms in MRPT. See mrpt::bayes::CParticleFilter. </li>
</ul>

See all classes in the namespace: mrpt::bayes


<small>Note: As of MRPT 0.9.1, the particle filter stuff is actually implemented
in the lib mrpt-base, but users are encouraged to depend on mrpt-bayes since it
implies mrpt-base, and in the future it's desirable to have all mrpt::bayes 
classes in this lib. </small>

*/

