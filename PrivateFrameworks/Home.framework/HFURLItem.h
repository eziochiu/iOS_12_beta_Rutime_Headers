/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFURLItem : HFItem {
    NSURL * _URL;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
