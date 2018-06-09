/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTRadioAccessTechnology : NSObject {
    CTTelephonyNetworkInfo * _networkInfo;
}

@property (readonly) NSString *radioAccessTechnology;

- (void)dealloc;
- (id)init;
- (id)initWithCTTelephonyNetworkInfo:(id)arg1;
- (id)radioAccessTechnology;

@end
