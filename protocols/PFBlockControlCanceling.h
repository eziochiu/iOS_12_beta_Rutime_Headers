/* made by EzioChiu.
 */

@protocol PFBlockControlCanceling <PFBlockControlCommon>

@required

- (bool)cancelBlock;
- (bool)tryCancelBlock;

@end
