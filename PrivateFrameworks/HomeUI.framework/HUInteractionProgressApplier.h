/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver> {
    double  _animationFromProgress;
    double  _animationToProgress;
    BOOL  _boundProgressValues;
    BOOL  _completesAtTargetState;
    HUAnimationApplier * _inFlightAnimation;
    UIInteractionProgress * _interactionProgress;
    double  _previousInteractionProgress;
    HUAnimationSettings * _significantProgressChangeAnimationSettings;
    HUAnimationSettings * _transitionAnimationSettings;
    BOOL  _waitingOnAnimationToComplete;
}

@property (nonatomic) double animationFromProgress;
@property (nonatomic) double animationToProgress;
@property (nonatomic) BOOL boundProgressValues;
@property (nonatomic) BOOL completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HUAnimationApplier *inFlightAnimation;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic) double previousInteractionProgress;
@property (nonatomic, retain) HUAnimationSettings *significantProgressChangeAnimationSettings;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUAnimationSettings *transitionAnimationSettings;
@property (nonatomic) BOOL waitingOnAnimationToComplete;

+ (id)applierWithInteractionProgress:(id)arg1;
+ (id)applyInteractionProgress:(id)arg1 withApplier:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (float)_currentInteractionProgress;
- (BOOL)_interactionProgressChangedSignificantly;
- (void)_updateCurrentProgress;
- (float)animationFromProgress;
- (float)animationToProgress;
- (BOOL)boundProgressValues;
- (BOOL)cancel;
- (BOOL)complete:(BOOL)arg1;
- (BOOL)completesAtTargetState;
- (id)inFlightAnimation;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (BOOL)isInteractive;
- (float)previousInteractionProgress;
- (void)setAnimationFromProgress:(float)arg1;
- (void)setAnimationToProgress:(float)arg1;
- (void)setBoundProgressValues:(BOOL)arg1;
- (void)setCompletesAtTargetState:(BOOL)arg1;
- (void)setInFlightAnimation:(id)arg1;
- (void)setPreviousInteractionProgress:(float)arg1;
- (void)setSignificantProgressChangeAnimationSettings:(id)arg1;
- (void)setTransitionAnimationSettings:(id)arg1;
- (void)setWaitingOnAnimationToComplete:(BOOL)arg1;
- (id)significantProgressChangeAnimationSettings;
- (BOOL)start;
- (id)transitionAnimationSettings;
- (BOOL)waitingOnAnimationToComplete;

@end