/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate> {
    CSAsset * _cachedAsset;
}

@property (retain) CSAsset *cachedAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(bool)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2;
- (void)_checkNewAssetAvailablity;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)arg1;
- (id)cachedAsset;
- (void)getVoiceTriggerAsset:(id /* block */)arg1;
- (id)init;
- (void)setCachedAsset:(id)arg1;
- (void)start;

@end
