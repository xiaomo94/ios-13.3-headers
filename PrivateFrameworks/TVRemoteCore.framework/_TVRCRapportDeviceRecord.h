/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCRapportDeviceRecord : NSObject {
    NSString * _ids;
    unsigned long long  _transports;
}

@property (nonatomic, copy) NSString *ids;
@property (nonatomic) unsigned long long transports;

- (void).cxx_destruct;
- (id)description;
- (bool)hasAvailableTransports;
- (id)ids;
- (id)initWithIDS:(id)arg1;
- (void)setIds:(id)arg1;
- (void)setTransports:(unsigned long long)arg1;
- (unsigned long long)transports;

@end
