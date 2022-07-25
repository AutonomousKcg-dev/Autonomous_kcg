
(cl:in-package :asdf)

(defsystem "g29_force_feedback-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ForceFeedback" :depends-on ("_package_ForceFeedback"))
    (:file "_package_ForceFeedback" :depends-on ("_package"))
  ))