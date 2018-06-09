/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocationHistory : NSObject {
    <MNLocationHistoryProvider> * _locationHistoryProvider;
}

@property (readonly) NSArray *locationHistory;
@property (nonatomic, retain) <MNLocationHistoryProvider> *locationHistoryProvider;

- (void).cxx_destruct;
- (id)init;
- (id)locationHistory;
- (id)locationHistoryProvider;
- (void)setLocationHistoryProvider:(id)arg1;

@end
