/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUINowPlayingSingleMovieCard : TLKStackView {
    SFPunchout * _punchout;
}

@property (retain) SFPunchout *punchout;

- (void).cxx_destruct;
- (id)initWithMovie:(id)arg1 style:(unsigned long long)arg2;
- (id)punchout;
- (void)setPunchout:(id)arg1;
- (void)tapOnMovie:(id)arg1;

@end
