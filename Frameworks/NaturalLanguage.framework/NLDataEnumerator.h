/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLDataEnumerator : NSObject {
    NLDataProvider * _dataProvider;
    unsigned long long  _idx;
}

- (void).cxx_destruct;
- (id)initWithDataProvider:(id)arg1;
- (id)nextInstance;

@end
