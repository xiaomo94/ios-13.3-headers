/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding> {
    CVACMMotionTypeDeviceMotionData * _deviceMotion;
    double  _timestamp;
}

@property (nonatomic, retain) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceMotion;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCMDeviceMotion:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setDeviceMotion:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
