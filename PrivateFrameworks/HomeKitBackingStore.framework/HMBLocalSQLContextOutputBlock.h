/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBLocalSQLContextOutputBlock : HMFObject {
    HMFActivity * _activity;
    unsigned long long  _blockRow;
    HMBLocalSQLContext * _owner;
    unsigned long long  _zoneRow;
}

@property (nonatomic, readonly) HMFActivity *activity;
@property (nonatomic) unsigned long long blockRow;
@property (nonatomic) HMBLocalSQLContext *owner;
@property (nonatomic, readonly) unsigned long long zoneRow;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)abort;
- (id)activity;
- (unsigned long long)blockRow;
- (id)commit:(id)arg1;
- (id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3;
- (id)owner;
- (void)setBlockRow:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;
- (id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3;
- (unsigned long long)zoneRow;

@end
