/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFQOSMeter : NSObject {
    unsigned long long  _counts;
    unsigned long long  _total;
}

- (id)description;
- (id)init;
- (bool)log:(long long)arg1;
- (void)recordQOS;

@end
