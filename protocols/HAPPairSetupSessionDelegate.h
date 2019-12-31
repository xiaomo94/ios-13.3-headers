/* Generated by RuntimeBrowser.
 */

@protocol HAPPairSetupSessionDelegate <NSObject>

@required

- (bool)pairSetupSession:(HAPPairSetupSession *)arg1 didPairWithPeer:(HAPPairingIdentity *)arg2 error:(id*)arg3;
- (HAPPairingIdentity *)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;

@optional

- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)pairSetupSessionDidStart:(HAPPairSetupSession *)arg1;

@end
