/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStunMessage : NSObject {
    struct IDSStunAttribute { 
        unsigned short type; 
        unsigned short len; 
        unsigned short valueType; 
        bool encrypted; 
        union { 
            struct sockaddr_storage { 
                unsigned char ss_len; 
                unsigned char ss_family; 
                BOOL __ss_pad1[6]; 
                long long __ss_align; 
                BOOL __ss_pad2[112]; 
            } ss; 
            unsigned char u8; 
            unsigned short u16; 
            unsigned int u32; 
            unsigned long long u64; 
            struct StunBinaryData { 
                int len; 
                unsigned char data[1472]; 
            } binaryData; 
            struct StunErrorCode { 
                int errorClass; 
                int errorNumber; 
                unsigned char errorReason[128]; 
                int len; 
            } errorCode; 
            struct StunUnknownAttribute { 
                int count; 
                unsigned short unknowAttributes[20]; 
            } unknownAttribute; 
        } value; 
    }  _attributes;
    struct _CCCryptor { } * _cryptorRef;
    NSData * _key;
    unsigned short  _len;
    int  _numAttribute;
    NSString * _requestID;
    bool  _requiresAES128CTR;
    double  _startTime;
    NSData * _transactionID;
    long long  _type;
}

@property (nonatomic, copy) NSData *key;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) NSData *transactionID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2;
- (void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2;
- (void)_addUInt32Attribute:(long long)arg1 value:(unsigned int)arg2;
- (void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2;
- (void)_addUInt8Attribute:(long long)arg1 value:(unsigned char)arg2;
- (void)_addUUIDAttribute:(long long)arg1 value:(id)arg2;
- (void)_addXORAddressAttribute:(long long)arg1 value:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;
- (bool)addAttribute:(struct IDSStunAttribute { unsigned short x1; unsigned short x2; unsigned short x3; bool x4; union { struct sockaddr_storage { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[6]; long long x_1_2_4; BOOL x_1_2_5[112]; } x_5_1_1; unsigned char x_5_1_2; unsigned short x_5_1_3; unsigned int x_5_1_4; unsigned long long x_5_1_5; struct StunBinaryData { int x_6_2_1; unsigned char x_6_2_2[1472]; } x_5_1_6; struct StunErrorCode { int x_7_2_1; int x_7_2_2; unsigned char x_7_2_3[128]; int x_7_2_4; } x_5_1_7; struct StunUnknownAttribute { int x_8_2_1; unsigned short x_8_2_2[20]; } x_5_1_8; } x5; }*)arg1;
- (bool)dataIndicationToBuffer:(char *)arg1 outputLength:(int*)arg2 data:(char *)arg3 dataLen:(int)arg4 keyData:(id)arg5 remainingLength:(unsigned long long)arg6;
- (void)dealloc;
- (bool)decryptAES128CTRStunAttributes:(id)arg1;
- (id)description;
- (bool)getAttribute:(long long)arg1 attribute:(struct IDSStunAttribute { unsigned short x1; unsigned short x2; unsigned short x3; bool x4; union { struct sockaddr_storage { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[6]; long long x_1_2_4; BOOL x_1_2_5[112]; } x_5_1_1; unsigned char x_5_1_2; unsigned short x_5_1_3; unsigned int x_5_1_4; unsigned long long x_5_1_5; struct StunBinaryData { int x_6_2_1; unsigned char x_6_2_2[1472]; } x_5_1_6; struct StunErrorCode { int x_7_2_1; int x_7_2_2; unsigned char x_7_2_3[128]; int x_7_2_4; } x_5_1_7; struct StunUnknownAttribute { int x_8_2_1; unsigned short x_8_2_2[20]; } x_5_1_8; } x5; }*)arg2;
- (bool)hasAttribute:(unsigned short)arg1;
- (bool)initAES128CTR:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)key;
- (bool)read:(char *)arg1 inputLength:(unsigned long long)arg2;
- (bool)read:(char *)arg1 inputLength:(unsigned long long)arg2 internal:(bool)arg3;
- (id)requestID;
- (void)setAttributes:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransactionID:(id)arg1 attributes:(id)arg2;
- (double)startTime;
- (bool)stunRequestToBuffer:(char *)arg1 outputLength:(int*)arg2 transactionID:(char *)arg3 reqCount:(int)arg4 userName:(char *)arg5 usernameLen:(int)arg6 sendTime:(unsigned short)arg7 keyData:(id)arg8 remainingLength:(unsigned long long)arg9;
- (bool)stunResponseToBuffer:(char *)arg1 outputLength:(int*)arg2 transactionID:(id)arg3 reqCount:(int)arg4 echoTime:(unsigned short)arg5 delay:(unsigned short)arg6 keyData:(id)arg7 remainingLength:(unsigned long long)arg8;
- (id)transactionID;
- (long long)type;
- (bool)verifyMessageIntegrityWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (bool)write:(char *)arg1 outputLength:(int*)arg2 remainingLength:(unsigned long long)arg3;
- (bool)write:(char *)arg1 outputLength:(int*)arg2 remainingLength:(unsigned long long)arg3 internal:(bool)arg4;

@end
