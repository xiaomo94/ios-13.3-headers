/* Generated by RuntimeBrowser.
 */

@protocol DKDiagnosticHostRemoteContext <NSObject>

@required

- (void)remoteHostCompleteWithResult:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: DKDiagnosticResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;

@end
