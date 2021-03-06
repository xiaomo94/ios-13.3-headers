/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WiFiAnalyticsAWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    WiFiAnalyticsAWDControlFrames * _rxControl;
    WiFiAnalyticsAWDDataFrames * _rxData;
    WiFiAnalyticsAWDManagementFrames * _rxManagement;
    unsigned long long  _timestamp;
    WiFiAnalyticsAWDControlFrames * _txControl;
    WiFiAnalyticsAWDDataFrames * _txData;
    WiFiAnalyticsAWDManagementFrames * _txManagement;
}

@property (nonatomic, readonly) bool hasRxControl;
@property (nonatomic, readonly) bool hasRxData;
@property (nonatomic, readonly) bool hasRxManagement;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTxControl;
@property (nonatomic, readonly) bool hasTxData;
@property (nonatomic, readonly) bool hasTxManagement;
@property (nonatomic, retain) WiFiAnalyticsAWDControlFrames *rxControl;
@property (nonatomic, retain) WiFiAnalyticsAWDDataFrames *rxData;
@property (nonatomic, retain) WiFiAnalyticsAWDManagementFrames *rxManagement;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) WiFiAnalyticsAWDControlFrames *txControl;
@property (nonatomic, retain) WiFiAnalyticsAWDDataFrames *txData;
@property (nonatomic, retain) WiFiAnalyticsAWDManagementFrames *txManagement;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRxControl;
- (bool)hasRxData;
- (bool)hasRxManagement;
- (bool)hasTimestamp;
- (bool)hasTxControl;
- (bool)hasTxData;
- (bool)hasTxManagement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rxControl;
- (id)rxData;
- (id)rxManagement;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRxControl:(id)arg1;
- (void)setRxData:(id)arg1;
- (void)setRxManagement:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxControl:(id)arg1;
- (void)setTxData:(id)arg1;
- (void)setTxManagement:(id)arg1;
- (unsigned long long)timestamp;
- (id)txControl;
- (id)txData;
- (id)txManagement;
- (void)writeTo:(id)arg1;

@end
