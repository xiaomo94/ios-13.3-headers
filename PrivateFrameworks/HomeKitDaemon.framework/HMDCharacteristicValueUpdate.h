/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicValueUpdate : HMFObject {
    NSError * _error;
    HMDDevice * _remoteDevice;
    NSString * _updateIdentifier;
    id  _value;
    NSDate * _valueUpatedTime;
    NSNumber * _valueUpdatedStateNumber;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) NSString *updateIdentifier;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) NSDate *valueUpatedTime;
@property (nonatomic, readonly) NSNumber *valueUpdatedStateNumber;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1 updateIdentifier:(id)arg2 remoteDevice:(id)arg3;
- (id)remoteDevice;
- (void)setValueUpdatedTime:(id)arg1 stateNumber:(id)arg2;
- (id)updateIdentifier;
- (id)value;
- (id)valueUpatedTime;
- (id)valueUpdatedStateNumber;

@end
