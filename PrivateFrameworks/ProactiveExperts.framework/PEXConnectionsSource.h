/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsSource : NSObject {
    <PEXConnectionsLocationSourceDelegate> * _delegate;
}

@property (nonatomic) <PEXConnectionsLocationSourceDelegate> *delegate;

+ (id)identifier;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
