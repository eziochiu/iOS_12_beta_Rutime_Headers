/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLNLP : NSObject

+ (id)dateIntervalsFromString:(id)arg1;
+ (id)lemmasForToken:(id)arg1 locale:(id)arg2;
+ (id)lemmasFromString:(id)arg1;
+ (id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3;
+ (id)tokensFromString:(id)arg1;
+ (id)tokensFromString:(id)arg1 lemmatize:(bool)arg2;

@end
