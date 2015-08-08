
(cl:in-package :asdf)

(defsystem "mavros_extras-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "CamIMUStamp" :depends-on ("_package_CamIMUStamp"))
    (:file "_package_CamIMUStamp" :depends-on ("_package"))
    (:file "OpticalFlowRad" :depends-on ("_package_OpticalFlowRad"))
    (:file "_package_OpticalFlowRad" :depends-on ("_package"))
    (:file "Vibration" :depends-on ("_package_Vibration"))
    (:file "_package_Vibration" :depends-on ("_package"))
  ))