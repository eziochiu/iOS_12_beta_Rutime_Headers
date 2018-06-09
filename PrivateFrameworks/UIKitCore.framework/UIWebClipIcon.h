/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebClipIcon : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bestSize;
    bool  _precomposed;
    bool  _siteWide;
    NSURL * _url;
}

@property (nonatomic) struct CGSize { double x1; double x2; } bestSize;
@property (getter=isPrecomposed, nonatomic) bool precomposed;
@property (getter=isSiteWide, nonatomic) bool siteWide;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bestSize;
- (long long)compare:(id)arg1 preferringDeviceIconSizes:(bool)arg2;
- (bool)isPrecomposed;
- (bool)isSiteWide;
- (void)setBestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrecomposed:(bool)arg1;
- (void)setSiteWide:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
