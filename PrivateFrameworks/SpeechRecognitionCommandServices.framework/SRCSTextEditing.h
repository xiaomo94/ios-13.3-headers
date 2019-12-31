/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

@interface SRCSTextEditing : NSObject {
    double  _delayAfterSelectionBeforeExecutingAction;
    <SRCSTextEditingProviderProtocol> * _provider;
}

@property double delayAfterSelectionBeforeExecutingAction;
@property <SRCSTextEditingProviderProtocol> *provider;

+ (long long)doesArrayOfWords:(id)arg1 containArrayOfArrayWords:(id)arg2;
+ (id)wordsFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_capitalizedStringFromString:(id)arg1;
- (id)_emojisFromCandidateStrings:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_findRangeForEnumerationType:(long long)arg1 atRelativeIncrement:(long long)arg2 fromPosition:(id)arg3 options:(unsigned long long)arg4;
- (long long)_indexOfFirstPhraseMatchResultPairBeforeInsertion:(bool)arg1 fromArray:(id)arg2;
- (id)_prunedStringsFromCandidateStrings:(id)arg1;
- (bool)_range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includesRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfWordBasedSearchString:(id)arg1 inString:(id)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 forwardSearchDirection:(bool)arg4;
- (id)_strippedPhraseStringsFromStrings:(id)arg1;
- (id)actOnStrings:(id)arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 alwaysCallActionOnClosestMatch:(bool)arg4 options:(id)arg5 actionBlock:(id /* block */)arg6;
- (void)applyFormatWithCommandIdentifier:(id)arg1;
- (void)correctSelection;
- (double)delayAfterSelectionBeforeExecutingAction;
- (void)deleteAll;
- (void)deleteCurrentLine;
- (void)deleteCurrentParagraph;
- (void)deleteCurrentSentence;
- (void)deleteCurrentWord;
- (void)deleteNextCharacterWithCount:(long long)arg1;
- (void)deleteNextLineWithCount:(long long)arg1;
- (void)deleteNextParagraphWithCount:(long long)arg1;
- (void)deleteNextSentenceWithCount:(long long)arg1;
- (void)deleteNextWordWithCount:(long long)arg1;
- (void)deletePreviousCharacterWithCount:(long long)arg1;
- (void)deletePreviousLineWithCount:(long long)arg1;
- (void)deletePreviousParagraphWithCount:(long long)arg1;
- (void)deletePreviousSentenceWithCount:(long long)arg1;
- (void)deletePreviousWordWithCount:(long long)arg1;
- (void)deleteSelection;
- (void)extendSelectionBackwardCharactersWithCount:(long long)arg1;
- (void)extendSelectionBackwardLinesWithCount:(long long)arg1;
- (void)extendSelectionBackwardParagraphsWithCount:(long long)arg1;
- (void)extendSelectionBackwardSentencesWithCount:(long long)arg1;
- (void)extendSelectionBackwardWordsWithCount:(long long)arg1;
- (void)extendSelectionForwardCharactersWithCount:(long long)arg1;
- (void)extendSelectionForwardLinesWithCount:(long long)arg1;
- (void)extendSelectionForwardParagraphsWithCount:(long long)arg1;
- (void)extendSelectionForwardSentencesWithCount:(long long)arg1;
- (void)extendSelectionForwardWordsWithCount:(long long)arg1;
- (void)extendSelectionToBeginning;
- (void)extendSelectionToEnd;
- (id)init;
- (void)insertEmoji;
- (id)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4;
- (id)markerRangeForLineInDesiredBlock:(int)arg1 count:(unsigned long long)arg2 options:(int)arg3;
- (void)moveBackwardCharactersWithCount:(long long)arg1;
- (void)moveBackwardLinesWithCount:(long long)arg1;
- (void)moveBackwardParagraphsWithCount:(long long)arg1;
- (void)moveBackwardSentencesWithCount:(long long)arg1;
- (void)moveBackwardWordsWithCount:(long long)arg1;
- (void)moveForwardCharactersWithCount:(long long)arg1;
- (void)moveForwardLinesWithCount:(long long)arg1;
- (void)moveForwardParagraphsWithCount:(long long)arg1;
- (void)moveForwardSentencesWithCount:(long long)arg1;
- (void)moveForwardWordsWithCount:(long long)arg1;
- (void)moveToEndOfLineWithCount:(long long)arg1;
- (void)moveToEndOfParagraphWithCount:(long long)arg1;
- (void)moveToEndOfSelection;
- (void)moveToEndOfSentenceWithCount:(long long)arg1;
- (void)moveToEndOfTextArea;
- (void)moveToEndOfWordWithCount:(long long)arg1;
- (void)moveToStartOfLineWithCount:(long long)arg1;
- (void)moveToStartOfParagraphWithCount:(long long)arg1;
- (void)moveToStartOfSelection;
- (void)moveToStartOfSentenceWithCount:(long long)arg1;
- (void)moveToStartOfTextArea;
- (void)moveToStartOfWordWithCount:(long long)arg1;
- (id)orderedPhraseMatchesFromStrings:(id)arg1 forwardDirection:(bool)arg2 referenceLocation:(long long)arg3 substringSearchGranularity:(int)arg4;
- (void)pasteboardCopy;
- (void)pasteboardCut;
- (void)pasteboardPaste;
- (id)provider;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfStrings:(id)arg1 referenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ambiguityResolution:(id)arg3 substringSearchGranularity:(int)arg4 foundStringRef:(id*)arg5;
- (void)selectAll;
- (void)selectCurrentCharacter;
- (void)selectCurrentLine;
- (void)selectCurrentParagraph;
- (void)selectCurrentSentence;
- (void)selectCurrentWord;
- (void)selectFromPhraseVariants:(id)arg1 insertionString:(id)arg2 commandIdentifer:(id)arg3;
- (void)selectFromPhraseVariants:(id)arg1 throughPhraseVariants:(id)arg2 commandIdentifer:(id)arg3;
- (void)selectNextCharacterWithCount:(long long)arg1;
- (void)selectNextLineWithCount:(long long)arg1;
- (void)selectNextParagraphWithCount:(long long)arg1;
- (void)selectNextSentenceWithCount:(long long)arg1;
- (void)selectNextWordWithCount:(long long)arg1;
- (void)selectPreviousCharacterWithCount:(long long)arg1;
- (void)selectPreviousLineWithCount:(long long)arg1;
- (void)selectPreviousParagraphWithCount:(long long)arg1;
- (void)selectPreviousSentenceWithCount:(long long)arg1;
- (void)selectPreviousTextInsertion;
- (void)selectPreviousWordWithCount:(long long)arg1;
- (void)setDelayAfterSelectionBeforeExecutingAction:(double)arg1;
- (void)setProvider:(id)arg1;
- (void)unselect;
- (id)visiblePhraseMatchesFromStrings:(id)arg1 substringSearchGranularity:(int)arg2;

@end
