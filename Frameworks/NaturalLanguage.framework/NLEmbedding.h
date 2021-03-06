/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLEmbedding : NSObject {
    void * _embedding;
}

@property (readonly) unsigned long long dimension;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;
@property (readonly) unsigned long long vocabularySize;

+ (id)_embeddingWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)_embeddingWithData:(id)arg1 error:(id*)arg2;
+ (bool)_writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 orData:(id)arg5 error:(id*)arg6;
+ (id)contextualWordEmbeddingForLanguage:(id)arg1;
+ (id)contextualWordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;
+ (unsigned long long)currentRevisionForLanguage:(id)arg1;
+ (id)embeddingDataForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 error:(id*)arg4;
+ (id)embeddingWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)embeddingWithData:(id)arg1 error:(id*)arg2;
+ (id)embeddingWithMLModel:(id)arg1 error:(id*)arg2;
+ (id)modelDescriptionForEmbedding:(id)arg1;
+ (id)supportedRevisionsForLanguage:(id)arg1;
+ (id)wordEmbeddingForLanguage:(id)arg1;
+ (id)wordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;
+ (bool)writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 error:(id*)arg5;
+ (bool)writeEmbeddingMLModelForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 options:(id)arg5 error:(id*)arg6;

- (void*)_createEmbeddingRefWithContentsOfURL:(id)arg1;
- (void*)_createEmbeddingRefWithData:(id)arg1;
- (id)_initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)_initWithData:(id)arg1 error:(id*)arg2;
- (bool)containsString:(id)arg1;
- (void)dealloc;
- (unsigned long long)dimension;
- (double)distanceBetweenString:(id)arg1 andString:(id)arg2 distanceType:(long long)arg3;
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(id /* block */)arg5;
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(id /* block */)arg5;
- (bool)getVector:(float*)arg1 forString:(id)arg2;
- (id)initContextualEmbeddingWithLocale:(struct __CFLocale { }*)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (id)initWithNLModel:(id)arg1 error:(id*)arg2;
- (id)language;
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;
- (unsigned long long)revision;
- (id)vectorForString:(id)arg1;
- (id)vectorsForSentences:(id)arg1 maxTokens:(unsigned long long)arg2;
- (unsigned long long)vocabularySize;

@end
