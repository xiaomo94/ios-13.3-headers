/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (struct _xpc_type_s { }*)_decodeType;
+ (id)_rightDescription;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (bool)_unsafe_isUsablePort:(unsigned int)arg1;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (id)_lock_encodePort:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(bool)arg2;
- (unsigned int)sendRight;

@end
