/* made by EzioChiu.
 */

@protocol FCFeedGroupInsertionDescriptor <NFCopying>

@required

- (bool)wantsToInsertGroup:(id <FCFeedGroupOutlining>)arg1 withContext:(FCFeedGroupEmittingContext *)arg2;

@end
