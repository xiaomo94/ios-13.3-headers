/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEValueContainer : NSObject {
    struct TSCEValue { 
        struct TSCENumberValue { 
            int (**_vptr$TSCEAbstractValue)(); 
            struct TSUDecimal { 
                struct { 
                    unsigned long long w[2]; 
                } _decimal; 
            } _decimal; 
            int _baseUnits[1]; 
            struct TSCEFormat { 
                struct TSCEFormatStruct { 
                    int mFormatType; 
                    union { 
                        struct { 
                            unsigned int mCurrencyCodeIndex : 16; 
                            unsigned int mDecimalPlaces : 8; 
                            unsigned int mNegativeStyle : 3; 
                            unsigned int mShowThousandsSeparator : 1; 
                            unsigned int mUseAccountingStyle : 1; 
                        } mNumberStruct; 
                        struct { 
                            unsigned int mFractionAccuracy : 8; 
                        } mFractionFormatStruct; 
                        struct { 
                            unsigned int mBase : 8; 
                            unsigned int mBasePlaces : 8; 
                            unsigned int mBaseUseMinusSign : 1; 
                        } mBaseFormatStruct; 
                        struct { 
                            unsigned int mUseAutomaticUnits : 1; 
                            int mDurationUnitSmallest; 
                            int mDurationUnitLargest; 
                            int mDurationStyle; 
                        } mDurationFormatStruct; 
                    } ; 
                    TSKDateTimeFormat *_dateTimeFormat; 
                    TSKCustomFormatWrapper *_customFormatWrapper; 
                    TSKBooleanFormat *_booleanFormat; 
                } _formatStruct; 
                unsigned char _formatState; 
            } _format; 
            bool _isUnitlessZero; 
        } _numberValue; 
        unsigned long long _buff[19]; 
        int _type; 
    }  mValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithValue:(struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; })arg1;
- (struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; })value;

@end