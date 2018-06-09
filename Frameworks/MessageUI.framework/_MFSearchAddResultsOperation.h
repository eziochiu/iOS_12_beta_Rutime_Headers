/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFSearchAddResultsOperation : NSOperation {
    <_MFSearchResultsConsumer> * _consumer;
    NSArray * _results;
    unsigned long long  _type;
}

+ (id)operationWithResults:(id)arg1 ofType:(unsigned long long)arg2 consumer:(id)arg3;

- (void)dealloc;
- (void)main;

@end
