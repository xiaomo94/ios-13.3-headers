/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExternalLabelAttribute : NSObject {
    struct tvec2<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
    }  _value;
    TSCH3DShaderVariable * _variable;
}

@property (nonatomic) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } value;
@property (nonatomic, retain) TSCH3DShaderVariable *variable;

+ (id)attributeWithVariable:(id)arg1 value:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg2;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (id)initWithVariable:(id)arg1 value:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg2;
- (bool)isValid;
- (void)setValue:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })arg1;
- (void)setVariable:(id)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })value;
- (id)variable;

@end
