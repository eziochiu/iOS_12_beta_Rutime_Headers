/* made by EzioChiu.
 */

@protocol SXWebContentDocumentStateReporting <NSObject>

@required

- (void)documentIsReady;
- (void)documentStartedLoading;
- (void)documentWillUnload;

@end
