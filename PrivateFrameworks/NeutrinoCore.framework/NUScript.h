/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUScript : NSObject {
    NSString * _source;
    NSURL * _url;
}

@property (retain) NSString *source;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSource:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)load:(out id*)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)url;

@end
