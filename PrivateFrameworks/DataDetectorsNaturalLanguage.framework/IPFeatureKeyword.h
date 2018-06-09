/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureKeyword : IPFeature {
    NSMutableDictionary * _contextDictionary;
    NSArray * _eventTypes;
    NSString * _keywordString;
    unsigned long long  _type;
}

@property (readonly) NSMutableDictionary *contextDictionary;
@property (nonatomic, retain) NSArray *eventTypes;
@property (retain) NSString *keywordString;
@property unsigned long long type;

+ (id)featureKeywordWithType:(unsigned long long)arg1 string:(id)arg2 matchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (void).cxx_destruct;
- (void)addEventType:(id)arg1;
- (id)contextDictionary;
- (id)description;
- (id)eventTypes;
- (id)humandReadableEventTypes;
- (id)keywordString;
- (void)setEventTypes:(id)arg1;
- (void)setKeywordString:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)typeDescription;

@end
