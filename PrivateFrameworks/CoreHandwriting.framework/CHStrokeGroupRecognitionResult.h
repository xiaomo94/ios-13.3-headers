/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying> {
    NSDictionary * _errorsByLocale;
    CHDrawing * _inputDrawing;
    NSArray * _inputDrawingCutPoints;
    NSArray * _inputStrokeIdentifiers;
    NSDictionary * _languageFitnessByLocale;
    NSDictionary * _recognitionResultsByLocale;
}

@property (nonatomic, readonly, copy) NSDictionary *errorsByLocale;
@property (nonatomic, readonly, retain) CHDrawing *inputDrawing;
@property (nonatomic, readonly, copy) NSArray *inputDrawingCutPoints;
@property (nonatomic, readonly, copy) NSArray *inputStrokeIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *languageFitnessByLocale;
@property (nonatomic, readonly, copy) NSDictionary *recognitionResultsByLocale;

+ (id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2;
+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)errorsByLocale;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2 doesContainUnfilteredMultiLocaleResults:(bool*)arg3;
- (id)init;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6;
- (id)inputDrawing;
- (id)inputDrawingCutPoints;
- (id)inputStrokeIdentifiers;
- (id)languageFitnessByLocale;
- (double)languageFitnessForLocale:(id)arg1;
- (id)localesSortedByLanguageFitness:(id)arg1;
- (id)recognitionResultsByLocale;

@end
