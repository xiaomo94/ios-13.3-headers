/* Generated by RuntimeBrowser.
 */

@protocol STStatusDomainXPCClient <NSObject>

@required

- (void)observeBatteryData:(STBatteryStatusDomainData *)arg1;
- (void)observeBatteryDataDiff:(STBatteryStatusDomainDataDiff *)arg1;
- (void)observeTelephonyData:(STTelephonyStatusDomainData *)arg1;
- (void)observeTelephonyDataDiff:(STTelephonyStatusDomainDataDiff *)arg1;
- (void)observeVoiceControlData:(STVoiceControlStatusDomainData *)arg1;
- (void)observeVoiceControlDataDiff:(STVoiceControlStatusDomainDataDiff *)arg1;
- (void)observeWifiData:(STWifiStatusDomainData *)arg1;
- (void)observeWifiDataDiff:(STWifiStatusDomainDataDiff *)arg1;

@end
