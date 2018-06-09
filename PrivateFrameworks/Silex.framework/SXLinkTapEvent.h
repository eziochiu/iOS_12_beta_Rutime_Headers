/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLinkTapEvent : SXAnalyticsEvent {
    NSURL * _destinationURL;
}

@property (nonatomic, readonly) NSURL *destinationURL;

- (void).cxx_destruct;
- (id)destinationURL;
- (id)initWithDestinationURL:(id)arg1;

@end
