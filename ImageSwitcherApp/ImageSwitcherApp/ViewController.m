//
//  ViewController.m
//  ImageSwitcherApp
//
//  Created by Jhonathan Sanchez on 2/15/16.
//  Copyright © 2016 Jhonathan Sanchez. All rights reserved.
//

#import "ViewController.h"



@implementation ViewController

-(void)fbClicked{
    imageView.image = [UIImage imageNamed:@"fb-art.jpg"];
}

-(void)twClicked{
    imageView.image = [UIImage imageNamed:@"twitter.png"];
}


@end
