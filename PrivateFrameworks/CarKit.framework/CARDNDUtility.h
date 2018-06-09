/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARDNDUtility : NSObject {
    CARAutomaticDNDStatus * _DNDStatus;
}

@property (nonatomic, retain) CARAutomaticDNDStatus *DNDStatus;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)DNDStatus;
- (id)outputFromRhodesUtility;
- (void)setDNDStatus:(id)arg1;

@end
