/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSCopying, NSSecureCoding> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)environmentWithIdentifier:(id)arg1;
+ (id)keyboardFocusEnvironment;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;
+ (id)systemEnvironment;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (bool)_isKeyboardFocusEnvironment;
- (bool)_isSystemEnvironment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
