/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage> {
    NSString * _account;
    NSDate * _date;
    NSString * _identifier;
    NSData * _lastOrderingData;
    NSData * _serverChangeTokenData;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *lastOrderingData;
@property (nonatomic, copy) NSData *serverChangeTokenData;
@property (readonly) Class superclass;

+ (id)className;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (void)setSyncToken:(id)arg1 inRealm:(id)arg2;
+ (id)syncTokenInRealm:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)date;
- (id)descriptor;
- (id)identifier;
- (id)lastOrderingData;
- (id)serverChangeTokenData;
- (void)setAccount:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastOrderingData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;

@end
