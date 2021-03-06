/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRealtimeSuggestionMock : NSObject

+ (void)cleanupAfterMockSuggestion:(id)arg1;
+ (id)contactDetailsFromData:(id)arg1 block:(id /* block */)arg2;
+ (id)contactMatchesWithContact:(id)arg1;
+ (id)createRealtimeContact:(id)arg1 error:(id*)arg2;
+ (id)createRealtimeEvent:(id)arg1 error:(id*)arg2;
+ (id)createSuggestion:(id)arg1 error:(id*)arg2;
+ (id)dateFromObject:(id)arg1 error:(id*)arg2;
+ (bool)isMockSuggestion:(id)arg1;
+ (id)loadFromFile:(id)arg1 error:(id*)arg2;
+ (id)originFromRecordId:(id)arg1;
+ (id)parseData:(id)arg1 error:(id*)arg2;
+ (id)parseJson:(id)arg1 error:(id*)arg2;

@end
