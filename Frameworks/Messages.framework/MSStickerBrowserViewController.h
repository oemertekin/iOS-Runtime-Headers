/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserViewController : UIViewController <MSStickerBrowserViewDataSource> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrameBeforeAppearance;
    MSStickerBrowserView * _stickerBrowserView;
    int  _stickerSize;
    BOOL  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrameBeforeAppearance;
@property (nonatomic, retain) MSStickerBrowserView *stickerBrowserView;
@property (nonatomic, readonly) int stickerSize;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewHasAppeared;

- (void).cxx_destruct;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)didReceiveMemoryWarning;
- (void)disableUserInteraction;
- (void)enableUserInteraction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStickerSize:(int)arg1;
- (id)initWithStickerSizeClass:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameBeforeAppearance;
- (void)loadView;
- (int)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)setInitialFrameBeforeAppearance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStickerBrowserView:(id)arg1;
- (void)setViewHasAppeared:(BOOL)arg1;
- (id)stickerBrowserView;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(int)arg2;
- (int)stickerSize;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)viewHasAppeared;
- (void)viewWillLayoutSubviews;

@end