/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKThreadContext : NSObject {
    long long  _CA_disableActionsCounter;
}

+ (id)currentContext;

- (void)_CA_setDisableActions:(bool)arg1;

@end
