; Auto-generated. Do not edit!


(cl:in-package front_expo-msg)


;//! \htmlinclude DoDishesGoal.msg.html

(cl:defclass <DoDishesGoal> (roslisp-msg-protocol:ros-message)
  ((dishwasher_id
    :reader dishwasher_id
    :initarg :dishwasher_id
    :type cl:integer
    :initform 0))
)

(cl:defclass DoDishesGoal (<DoDishesGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DoDishesGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DoDishesGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name front_expo-msg:<DoDishesGoal> is deprecated: use front_expo-msg:DoDishesGoal instead.")))

(cl:ensure-generic-function 'dishwasher_id-val :lambda-list '(m))
(cl:defmethod dishwasher_id-val ((m <DoDishesGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader front_expo-msg:dishwasher_id-val is deprecated.  Use front_expo-msg:dishwasher_id instead.")
  (dishwasher_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DoDishesGoal>) ostream)
  "Serializes a message object of type '<DoDishesGoal>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'dishwasher_id)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DoDishesGoal>) istream)
  "Deserializes a message object of type '<DoDishesGoal>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DoDishesGoal>)))
  "Returns string type for a message object of type '<DoDishesGoal>"
  "front_expo/DoDishesGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DoDishesGoal)))
  "Returns string type for a message object of type 'DoDishesGoal"
  "front_expo/DoDishesGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DoDishesGoal>)))
  "Returns md5sum for a message object of type '<DoDishesGoal>"
  "65bd9e09a531006f4ecdeabe719004b9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DoDishesGoal)))
  "Returns md5sum for a message object of type 'DoDishesGoal"
  "65bd9e09a531006f4ecdeabe719004b9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DoDishesGoal>)))
  "Returns full string definition for message of type '<DoDishesGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 dishwasher_id  # Specify which dishwasher we want to use~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DoDishesGoal)))
  "Returns full string definition for message of type 'DoDishesGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 dishwasher_id  # Specify which dishwasher we want to use~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DoDishesGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DoDishesGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'DoDishesGoal
    (cl:cons ':dishwasher_id (dishwasher_id msg))
))
