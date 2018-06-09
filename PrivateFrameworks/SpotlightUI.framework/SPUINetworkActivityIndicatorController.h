/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUINetworkActivityIndicatorController : NSObject

+ (void)hideNetworkActivityIndicator;
+ (bool)isNetworkActivityIndicatorVisible;
+ (void)setNetworkActivityIndicatorVisible:(bool)arg1;
+ (void)startWaitingForNetworkResults;
+ (void)stopWaitingForNetworkResults;

@end
