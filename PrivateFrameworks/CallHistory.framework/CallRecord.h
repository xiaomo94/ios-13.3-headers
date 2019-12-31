/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallRecord : NSManagedObject

@property (nonatomic, retain) NSString *address;
@property (nonatomic, copy) NSNumber *answered;
@property (nonatomic, copy) NSNumber *call_category;
@property (nonatomic, copy) NSNumber *calltype;
@property (nonatomic, readonly) long long chHandleType;
@property (nonatomic, readonly, copy) NSSet *chRemoteParticipantHandles;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSNumber *disconnected_cause;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *face_time_data;
@property (nonatomic, copy) NSNumber *filtered_out_reason;
@property (nonatomic, copy) NSNumber *handle_type;
@property (nonatomic, copy) NSString *iso_country_code;
@property (nonatomic, copy) NSUUID *localParticipantUUID;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *number_availability;
@property (nonatomic, copy) NSNumber *originated;
@property (nonatomic, copy) NSUUID *outgoingLocalParticipantUUID;
@property (nonatomic, copy) NSNumber *read;
@property (nonatomic, retain) NSSet *remoteParticipantHandles;
@property (nonatomic, copy) NSString *service_provider;
@property (nonatomic, readonly) bool supportsCallCategory;
@property (nonatomic, readonly) bool supportsHandleType;
@property (nonatomic, readonly) bool supportsLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsOutgoingLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsRemoteParticipantHandles;
@property (nonatomic, readonly) bool supportsServiceProvider;
@property (nonatomic, readonly) bool supportsVerificationStatus;
@property (nonatomic, copy) NSString *unique_id;
@property (nonatomic, copy) NSNumber *verificationStatus;

+ (id)fetchRequest;

- (long long)chHandleType;
- (id)chRemoteParticipantHandles;
- (id)compositeCallCategoryForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeVerificationStatusForContext:(id)arg1;
- (bool)supportsCallCategory;
- (bool)supportsHandleType;
- (bool)supportsLocalParticipantUUID;
- (bool)supportsOutgoingLocalParticipantUUID;
- (bool)supportsRemoteParticipantHandles;
- (bool)supportsServiceProvider;
- (bool)supportsVerificationStatus;

@end
