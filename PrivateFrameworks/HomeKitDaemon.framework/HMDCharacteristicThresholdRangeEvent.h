/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSNumber * _max;
    NSNumber * _min;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *max;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) NSNumber *min;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_evaluateNewValue:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (bool)_isValueInRange:(id)arg1;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)createPayload;
- (id)description;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)max;
- (id)metricData;
- (id)min;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)setMax:(id)arg1;
- (void)setMin:(id)arg1;

@end
