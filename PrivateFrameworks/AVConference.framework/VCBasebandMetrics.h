/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCBasebandMetrics : NSObject {
    unsigned int  _averageBitrate;
    unsigned int  _averageBitrateLong;
    double  _bdcd;
    struct { 
        double time[15]; 
        double bdcd[15]; 
        double delay[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _bdcdList;
    double  _expectedQueuingDelay;
    double  _expectedQueuingDelayLong;
    struct { 
        double time[15]; 
        unsigned int transmittedBytes[15]; 
        unsigned int nonFlushableQueueDepth[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _infoList;
    bool  _isBDCDListReady;
    bool  _isTargetBitrateStabilized;
    struct { 
        int type; 
        unsigned short version; 
        double arrivalTime; 
        union { 
            struct { 
                unsigned short radioTechnology; 
                unsigned char transmissionAntenna; 
                unsigned short numberOfFlows; 
                unsigned char flowType; 
                BOOL transmissionPower; 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int basebandTransmissionBytes; 
                unsigned int lastTransmissionTimestamp; 
            } report; 
            struct { 
                unsigned short transactionID; 
                unsigned short totalNumDropped; 
                unsigned short numberOfPayloadTypes; 
                struct { 
                    unsigned char payloadType; 
                    unsigned short numberOfPacketDropped; 
                    unsigned short awDroppedSN[500]; 
                } PTSpecific[6]; 
            } dropAck; 
            struct { 
                unsigned short currentBitrate; 
                unsigned short suggestedBitrate; 
            } codecRateChange; 
        } notes; 
    }  _lastBasebandNotification;
    void * _logBasebandDump;
    VCRateControlMediaController * _mediaController;
    double  _normalizedBDCD;
    double  _normalizedDelay;
    unsigned int  _previousAverageBitrate;
    bool  _resetAverageBitrateLong;
    unsigned int  _targetBitrate;
    unsigned int  _txBitrate;
}

@property (nonatomic) bool isTargetBitrateStabilized;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) unsigned int targetBitrate;

- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)addInfoListWithNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg1;
- (void)dealloc;
- (void)enableBasebandLogDump:(void*)arg1;
- (struct { int x1; double x2; bool x3; bool x4; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_5_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; unsigned int x_2_2_13; unsigned int x_2_2_14; double x_2_2_15; unsigned int x_2_2_16; } x_5_1_2; struct { double x_3_2_1; double x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned long long x_3_2_8; } x_5_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_5_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_5_1_5; } x5; })getBasebandMetricsWithNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1;
- (bool)isTargetBitrateStabilized;
- (id)mediaController;
- (void)normalizeBDCD:(double)arg1;
- (void)resetBDCDList;
- (void)setIsTargetBitrateStabilized:(bool)arg1;
- (void)setMediaController:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)targetBitrate;

@end
