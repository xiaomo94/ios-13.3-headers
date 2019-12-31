/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {
    NSUUID * _databaseIdentifier;
    NSString * _deviceIdentifier;
    NSString * _ownerDifferentiator;
    NSString * _ownerIdentifierString;
}

@property (nonatomic, readonly) NSString *cloudKitIdentifier;
@property (nonatomic, readonly) NSString *string;

+ (id)_databaseUUIDForProfile:(id)arg1 error:(id*)arg2;
+ (void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(id /* block */)arg3;
+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

- (void).cxx_destruct;
- (id)cloudKitIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)string;

@end
