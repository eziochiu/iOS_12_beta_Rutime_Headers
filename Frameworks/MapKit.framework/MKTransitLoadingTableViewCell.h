/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {
    UIActivityIndicatorView * _loadingIndicator;
    _MKUILabel * _loadingLabel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end
